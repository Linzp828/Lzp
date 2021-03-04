#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>



int main(int argc,char *argv[]){
	if(argc==3){
		int i=0;
		for(i=1;i<argc;i++){
			printf("%d:%s\n",i,argv[i]);
			FILE *fp=fopen(argv[i],"r");
			if(!fp){
				printf("%d file can't open\n'",i);
			}else{
				printf("%d file name:%s\n",i,argv[i]);
			}
		}
		
	}	
	return 0;
}
