# include <stdio.h>

int main(){
	char symbol = '#';
	
	for(int i = 0; i < 6; i++){
		if(i == 0){
			for(int k = 5; k > 0; k--){
				putchar(symbol);
			}
		printf("\n");
		} else if(i == 3){
			for(int f = 4; f > 0; f --){
				putchar(symbol);
			}
		printf("\n");
		} else {
			putchar(symbol);
			printf("\n");
		}
	}

	return 0;
}
