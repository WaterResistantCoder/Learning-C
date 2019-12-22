
#include<stdio.h>
#include<stdlib.h>

#include<time.h>

int height,width;

char black; //background
char white; //foreground

void print_buffer(char buff[height][width]){
	int i,k;
	
	system("clear");//Linux code, make changes here to run on Windows
	for(i=0;i<height;i++){
		for(k=0;k<width;k++){
			printf("%c",buff[i][k]);
		}
		printf("\n");
	}
}

void set_buffer(char buff[height][width],char a){
	int i,k;
	
	for(i=0;i<height;i++){
		for(k=0;k<width;k++){
			buff[i][k] = black;
		}
	}
}

void print_intC(int x,int y,int a,char buff[height][width]){
	//just realised that x is y and y is x XD
	switch(a){
		case 0:
			buff[x+0][y+2] = white;
			buff[x+0][y+1] = white;
			buff[x+0][y+3] = white;
			buff[x+1][y+0] = white;
			buff[x+2][y+0] = white;
			buff[x+3][y+0] = white;
			buff[x+4][y+0] = white;
			buff[x+5][y+2] = white;
			buff[x+1][y+4] = white;
			buff[x+2][y+4] = white;
			buff[x+3][y+4] = white;
			buff[x+4][y+4] = white;
			buff[x+5][y+2] = white;
			buff[x+5][y+1] = white;
			buff[x+5][y+3] = white;
			break;
		case 1:
			buff[x+1][y+1] = white;
			buff[x+0][y+2] = white;
			buff[x+1][y+2] = white;
			buff[x+2][y+2] = white;
			buff[x+3][y+2] = white;
			buff[x+4][y+2] = white;
			buff[x+5][y+2] = white;
			buff[x+5][y+1] = white;
			buff[x+5][y+3] = white;
			break;
		case 2:
			buff[x+0][y+0] = white;
			buff[x+0][y+1] = white;
			buff[x+0][y+2] = white;
			buff[x+0][y+3] = white;
			buff[x+0][y+4] = white;
			buff[x+1][y+4] = white;
			
			buff[x+2][y+2] = white;
			buff[x+2][y+3] = white;
			buff[x+2][y+4] = white;
			buff[x+3][y+0] = white;
			buff[x+3][y+1] = white;
			buff[x+3][y+2] = white;
			
			buff[x+4][y+0] = white;
			buff[x+5][y+0] = white;
			buff[x+5][y+1] = white;
			buff[x+5][y+2] = white;
			buff[x+5][y+3] = white;
			buff[x+5][y+4] = white;
			break;
		case 3:
			buff[x+0][y+0] = white;
			buff[x+0][y+1] = white;
			buff[x+0][y+2] = white;
			buff[x+0][y+3] = white;
			buff[x+0][y+4] = white;
			buff[x+1][y+4] = white;	
			buff[x+2][y+2] = white;
			buff[x+2][y+3] = white;
			buff[x+2][y+4] = white;
			buff[x+2][y+3] = white;
			buff[x+3][y+2] = white;
			buff[x+3][y+3] = white;
			buff[x+3][y+4] = white;
			buff[x+4][y+4] = white;
			buff[x+5][y+0] = white;
			buff[x+5][y+1] = white;
			buff[x+5][y+2] = white;		
			buff[x+5][y+3] = white;
			buff[x+5][y+4] = white;
			break;
		case 4:
			buff[x+0][y+0] = white;
			buff[x+1][y+0] = white;
			buff[x+2][y+0] = white;
			buff[x+3][y+0] = white;
			
			buff[x+3][y+0] = white;
			buff[x+3][y+1] = white;
			buff[x+3][y+2] = white;
			buff[x+3][y+3] = white;
			buff[x+3][y+4] = white;
			
			buff[x+2][y+2] = white;
			buff[x+4][y+2] = white;
			buff[x+5][y+2] = white;
			break;
		case 5:
			buff[x+0][y+0] = white;
			buff[x+0][y+1] = white;
			buff[x+0][y+2] = white;
			buff[x+0][y+3] = white;
			buff[x+0][y+4] = white;
			
			buff[x+1][y+0] = white;
			buff[x+2][y+0] = white;
			buff[x+2][y+1] = white;
			buff[x+3][y+3] = white;
			buff[x+3][y+4] = white;
			buff[x+4][y+4] = white;
			
			buff[x+5][y+0] = white;
			buff[x+5][y+1] = white;
			buff[x+5][y+2] = white;
			buff[x+5][y+3] = white;
			buff[x+5][y+4] = white;
			break;
		case 6:
			buff[x+0][y+0] = white;
			buff[x+0][y+1] = white;
			buff[x+0][y+2] = white;
			buff[x+0][y+3] = white;
			buff[x+0][y+4] = white;
			
			buff[x+1][y+0] = white;
			buff[x+2][y+0] = white;
			buff[x+3][y+0] = white;
			buff[x+4][y+0] = white;
			
			buff[x+3][y+1] = white;
			buff[x+3][y+2] = white;
			buff[x+3][y+3] = white;
			buff[x+3][y+4] = white;
			
			buff[x+4][y+4] = white;
			
			buff[x+5][y+0] = white;
			buff[x+5][y+1] = white;
			buff[x+5][y+2] = white;
			buff[x+5][y+3] = white;
			buff[x+5][y+4] = white;
			break;
		case 7:
			buff[x+0][y+0] = white;
			buff[x+0][y+1] = white;
			buff[x+0][y+2] = white;
			buff[x+0][y+3] = white;
			buff[x+0][y+4] = white;
			
			buff[x+1][y+4] = white;
			buff[x+2][y+4] = white;
			buff[x+3][y+4] = white;
			buff[x+4][y+4] = white;
			buff[x+5][y+4] = white;
			break;
		case 8:
			buff[x+0][y+0] = white;
			buff[x+0][y+2] = white;
			buff[x+0][y+1] = white;
			buff[x+0][y+3] = white;
			buff[x+0][y+4] = white;
			buff[x+1][y+0] = white;
			buff[x+2][y+0] = white;
			buff[x+3][y+0] = white;
			buff[x+4][y+0] = white;
			buff[x+5][y+2] = white;
			buff[x+1][y+4] = white;
			buff[x+2][y+4] = white;
			buff[x+3][y+4] = white;
			buff[x+4][y+4] = white;
			buff[x+5][y+2] = white;
			buff[x+5][y+1] = white;
			buff[x+5][y+3] = white;
			buff[x+5][y+0] = white;
			buff[x+5][y+4] = white;
			
			buff[x+2][y+1] = white;
			buff[x+2][y+2] = white;
			buff[x+2][y+3] = white;
			buff[x+3][y+2] = white;
			buff[x+3][y+3] = white;
			buff[x+3][y+1] = white;
			break;
		case 9:
			buff[x+0][y+0] = white;
			buff[x+0][y+1] = white;
			buff[x+0][y+2] = white;
			buff[x+0][y+3] = white;
			buff[x+0][y+4] = white;
			
			buff[x+1][y+4] = white;
			buff[x+2][y+4] = white;
			buff[x+3][y+4] = white;
			buff[x+4][y+4] = white;
			
			buff[x+2][y+0] = white;
			buff[x+2][y+1] = white;
			buff[x+2][y+2] = white;
			buff[x+2][y+3] = white;
			
			buff[x+1][y+0] = white;
			
			buff[x+5][y+0] = white;
			buff[x+5][y+1] = white;
			buff[x+5][y+2] = white;
			buff[x+5][y+3] = white;
			buff[x+5][y+4] = white;
			break;	
		default:
			/*buff[x+0][y+2] = white;
			buff[x+0][y+1] = white;
			buff[x+0][y+3] = white;
			buff[x+1][y+0] = white;
			buff[x+2][y+0] = white;
			buff[x+3][y+0] = white;
			buff[x+4][y+0] = white;
			buff[x+5][y+2] = white;
			buff[x+1][y+4] = white;
			buff[x+2][y+4] = white;
			buff[x+3][y+4] = white;
			buff[x+4][y+4] = white;
			buff[x+5][y+2] = white;
			buff[x+5][y+1] = white;
			buff[x+5][y+3] = white;*/
			
			buff[x+1][y+2] = white;
			buff[x+4][y+2] = white;
	}
	print_buffer(buff);
}

int main()
{	
	height = 10;
	width = 60;
	
	black = '#';
	white = ' ';
	
	char buffer[height][width];
	set_buffer(buffer,black);
	/*
	// Testing
	print_intC(5,0,0,buffer);
	
	print_intC(5,6,1,buffer);
	
	print_intC(5,12,2,buffer);
	
	print_intC(5,18,3,buffer);
	
	print_intC(5,24,4,buffer);
	
	print_intC(5,30,5,buffer);
	
	print_intC(5,36,6,buffer);
	
	print_intC(5,42,7,buffer);
	
	print_intC(5,48,8,buffer);
	
	print_intC(5,54,9,buffer);
	*/

	/*
	// Taking inputs
	int num;
	int hor = 0;
	int ver = 0;
	while(1){
		if(hor + 6 >= width){
			hor = 0;
			ver = ver + 7;
			continue;
		}
		if(ver + 7 > height){
			break;
		}
		scanf("%d",&num);
		print_intC(ver+1,hor+2,num,buffer);
		hor = hor + 6;
	}
	*/
	
	/*
	// 24hrs format
	time_t tl;
	struct tm* ptr;
	unsigned long long count = 0;
	while(1){
	if(count % 100000000 == 0){
		tl = time(NULL);
		ptr = localtime(&tl);
		char * str = asctime(ptr);
		//printf("%s",str);
		int hr1,hr2,min1,min2,sec1,sec2;
		
		hr1 = str[11] - '0';
		hr2 = str[12] - '0';
		
		min1 = str[14] - '0';
		min2 = str[15] - '0';
		
		sec1 = str[17] - '0';
		sec2 = str[18] - '0';
		
		set_buffer(buffer,black);
		
		print_intC(1,0,hr1,buffer);
		
		print_intC(1,6,hr2,buffer);
		
		print_intC(1,12,20,buffer);
		
		print_intC(1,18,min1,buffer);
		
		print_intC(1,24,min2,buffer);
		
		print_intC(1,30,50,buffer);
		
		print_intC(1,36,sec1,buffer);
		
		print_intC(1,42,sec2,buffer);
		}
		
		count++;
	}
	*/
	// 12hrs format
	time_t tl;
	struct tm* ptr;
	unsigned long long count = 0;
	while(1){
	if(count % 100000000 == 0){
		tl = time(NULL);
		ptr = localtime(&tl);
		char * str = asctime(ptr);
		//printf("%s",str);
		int hr1,hr2,min1,min2,sec1,sec2;
		
		hr1 = str[11] - '0';
		hr2 = str[12] - '0';

		int hour = 10 * hr1 + hr2;
		hour -= 12;
		hr1 = hour / 10;
		hr2 = hour % 10;
		
		min1 = str[14] - '0';
		min2 = str[15] - '0';
		
		sec1 = str[17] - '0';
		sec2 = str[18] - '0';
		
		set_buffer(buffer,black);
		
		print_intC(1,0,hr1,buffer);
		
		print_intC(1,6,hr2,buffer);
		
		print_intC(1,12,20,buffer);
		
		print_intC(1,18,min1,buffer);
		
		print_intC(1,24,min2,buffer);
		
		print_intC(1,30,50,buffer);
		
		print_intC(1,36,sec1,buffer);
		
		print_intC(1,42,sec2,buffer);
		}
		
		count++;
	}
	return 0;
}

