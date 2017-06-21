int main ()
{
	float pi = 3.12159;
	int ipi = (int)pi;
	printf("Value =%f and %d\n", pi, ipi);

	float one = 4/3;
	float two = 4%3;
	float three = 4.0/3;
	printf("Numbers = %f and %f and %f\n", one, two, three); 

	printf("%f , %f , %f \n", (float) (4/3), (float) (4%3), (float) (4.0/3));	

	printf("False = %d \n", (3==2));
	printf("True = %d \n", (5==5));	

if(3>2) {
                printf("True\n");
        } else {
                printf("False\n");
        }
if(3<2) {
                printf("True\n");
        } else {
                printf("False\n");
        }
if(3-(2+1)) {
                printf("True\n");
        } else {
                printf("False\n");
        }
if('d') {
                printf("True\n");
        } else {
                printf("False\n");
        }
if(9%3) {
                printf("True\n");
        } else {
                printf("False\n");
        }
	if((3>2)-1) {
		printf("True\n");
	} else {
		printf("False\n");
	}
	
	printf("hello again, new world\n");
	return 0;
}
