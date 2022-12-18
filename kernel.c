void main()
{
char* video_memory = (char*) 0xb8000;
video_memory += 160;
*video_memory = 'W';
video_memory += 2;
*video_memory = 'e';
video_memory += 2;
*video_memory = 'l';
video_memory += 2;
*video_memory = 'c';
video_memory += 2;
*video_memory = 'o';
video_memory += 2;
*video_memory = 'm';
video_memory += 2;
*video_memory = 'e';
video_memory += 2;
*video_memory = ' ';
video_memory += 2;
*video_memory = 'T';
video_memory += 2;
*video_memory = 'o';
video_memory += 2;
*video_memory = ' ';
video_memory += 2;
*video_memory = 'O';
video_memory += 2;
*video_memory = 'S';
video_memory += 2;
*video_memory = '!';
}
