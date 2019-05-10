#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void repeat(const char* input, int repeat) {
	for(int index=0; index<repeat;index++) {
		printf(input);
	}
}

int main() {
	printf(" 📤 Your request is placed in the queue. Please do not send another request. Be patient ...\n");
	printf(" 🔗 Link:http://google.com/book/sample.zip ...\n");
	printf(" 🗂 File:sample.zip\n");
	printf(" 💿 File Size:94.76 MB\n\n");
	printf(" ⌛️Uploading progress:\n");
	for(double index=0; index<= 38; index+=0.1) {
		// printf("\r %3.f\n", index);
		// int i=(int) index;
		// printf("\r   ");
		// repeat("⬛️", i);
		// repeat("⬜️", 38-i);
		// printf("  (");
		// printf("%f", index * 2.5);
		// printf("%)");
		// Sleep(40);
	}
	printf("\n");
	return 0;
}
