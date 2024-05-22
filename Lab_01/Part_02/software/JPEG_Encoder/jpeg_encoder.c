/*************************************************************************************
 * CO503 Advanced Embedded Systems
 *
 * Date			: 16-08-2016
 * Author 		: Isuru Nawinne
 * Edited by	:
 *
 * Description	: Compress and convert a BMP image file into JPEG format
 *
 *************************************************************************************/

#include "application/jpeg_encoding.h"
#include "application/bmp_extract.h"

//Including Libraries
#include <stdio.h>
#include <stdint.h>
#include <io.h>
#include <unistd.h>


#define NO_OF_FILES 7
#define BASE_ADDR 0x09001000
#define OFFSET 0


void convert_picture(const char *jtag_input);


int main()
{
	char jtag_input[20];

	// Print that welcome message. Programmers looove welcome messages! ;)
	printf("CO503 JPEG Encoder \n\n");

	while(1) {

		// Turn ON Waiting LED
		IOWR(BASE_ADDR, OFFSET, 0x00000001);

		printf("Input file: ");
		scanf("%s", jtag_input); // Ask for the input BMP file

		// Turn OFF 'waiting' LED before conversion
		IOWR(BASE_ADDR, OFFSET, 0x000000000);

		// Check if the filename ends in '.bmp'
		if(strcmp(&jtag_input[strlen(jtag_input) - 4], ".bmp") == 0) {

			convert_picture(jtag_input); // See function at the bottom

		}
		// Turn on Finished LED
		IOWR(BASE_ADDR, OFFSET, 0x00000004);

		// Sleep some time (2 seconds)
		usleep(2000000);

		// Turn off Finished LED
		IOWR(BASE_ADDR, OFFSET, 0x00000000);


		printf("\n\n");
	}

	return 0;
}

/*
 * Convert a BMP picture of name <jtag_input> into JPEG.
 */
void convert_picture(const char *jtag_input)
{

	// Turn on Conversion LED
	IOWR(BASE_ADDR, OFFSET, 0x00000002);

	char file_name[80] = "/mnt/host/files/";
	char destination[80] = "/mnt/host/files/";
	Bmp_data pic_data;

	strcat(file_name, jtag_input);
	strcat(destination, jtag_input);

	// Replace the '.bmp' with '.jpg'
	strcpy(&destination[strlen(destination) - 3], "jpg");

	if(bmp_extract(file_name, &pic_data) == 0) {
		// Convert to JPEG. This is where the magic happens!
		jpeg_encode(destination, pic_data.bitmap, pic_data.header->BMPHeight, pic_data.header->BMPWidth, 90);
	} else {
		// An error has happened
	}

	// Turn off Conversion LED
	IOWR(BASE_ADDR, OFFSET, 0x00000000);
}
