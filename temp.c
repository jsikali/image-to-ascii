//ok the thought process is just get file, open it
//dump out all the contents for now and refer to wiki
//or an rfc. idk. i swear i saw this on wiki at some point
//lalaalallalalalallalaalalallala

#include <stdio.h>

int main(int argc, char** argv)
{
   //hope this is called correctly
   if(argc != 2)
   {
      printf("Incorrect arguments. \nUsage: ./temp (file path)\n");
      return -1;
   }
   
   //hope the arg is a file lol
   FILE* image = fopen(argv[1], "r");
   if(image == NULL)
   {
      printf("Image not found at \"%s\".", argv[1]);
      return -1;
   }

   //just print whatever is there to see
   printf("printing the image at \"%s\" w/o any parsing...\n\n", argv[1]);
   //fprintf(stdout, "%s", image); // lol

   char filecontent = fgetc(image);
	while(filecontent != EOF)
	{
		printf("%c", filecontent);
		filecontent = fgetc(image);
	}
	

   fclose(image);
   return 0;   
}