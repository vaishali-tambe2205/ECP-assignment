#include<stdio.h>

int Fun_Add(int n1, int n2);
int Fun_Sub(int n1, int n2);
int Fun_Mul(int n1, int n2);
int Fun_Div(int n1, int n2);

int main()
{
	int n1, n2;
	int res=0;
	int ch;
	printf("Enter the values of n1 and n2 : \n");
	scanf("%d%d",&n1,&n2);
	
	printf("Enter the choice : \n");
	scanf("%d",&ch);

	switch(ch)
	{
		case 1: res = Fun_Add(n1,n2);
				printf("Addition = %d\n",res);
		        break;

		case 2: res = Fun_Sub(n1,n2);
				printf("Substraction = %d\n",res);
				break;

		case 3: res = Fun_Mul(n1,n2);
				printf("Multiplication = %d\n",res);
				break;

		case 4: if (n2 == 0){
					printf("ERROR!--> Division by zero is not possible\n");
				}
				else{
					res = Fun_Div(n1,n2);
					printf("Division = %d\n",res);
				}
				break;

		default : printf("Enter Valid choice\n");
					
	}
}
	int Fun_Add(int n1, int n2){

 		return n1+n2;
		}
	int Fun_Sub(int n1, int n2){

		return n1-n2;
		}
	int Fun_Mul(int n1, int n2){

		return n1*n2;
		}
	int Fun_Div(int n1, int n2){

		return n1/n2;
		}
