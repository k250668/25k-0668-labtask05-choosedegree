# include <stdio.h>

int main() {
	int degree;
	int spec1;
	int spec2;
	printf("Choose your department (1-2)\n");
	printf("1.Engineering\n");
	printf("2.Medicine\n");
	scanf("%d", &degree);
	
	switch(degree) {
		
		case 1:
	 printf("You chose engineering \n");
		printf("What specilization do you want to go for?\n");
		printf("1.Cs\n");
		printf("2.Mecanical\n");
		printf("3.Electrical \n");
		scanf("%d", &spec1);
		switch (spec1){
			case 1:
				printf("Your courses are as following \n");
				printf("1.Calc\n");
				printf("2.AP\n");
				printf("3.PF\n");
			    break;
			case 2:
				printf("Your courses are as following \n");
				printf("1.Calc\n");
				printf("2.Robotics\n");
				printf("3.mechanics\n");
			    break;
			case 3:
			    printf("Your courses are as following \n");
				printf("1.Calc\n");
				printf("2.circuits\n");
				printf("3.mechanics\n");
			    break;
			default:
				printf("Invalid");
		}
		break;
	case 2:
	 printf("You chose medicine");
		printf("What specilization do you want to go for?\n");
		printf("1.Bds\n");
		printf("2.MBBS\n");
		printf("3.Pharmacy\n");
		scanf("%d",&spec2);
		switch (spec2){
		
			case 1:
				printf("Your courses are as following \n");
				printf("1.denistry\n");
				printf("2.bds spec\n");
				printf("3.bds spec3\n");
			    break;
			case 2:
				printf("Your courses are as following \n");
				printf("1.Basics\n");
				printf("2.mbbs spec2\n");
			printf("2.mbbs spec3\n");
			    break;
			case 3:
			    printf("Your courses are as following \n");
				printf("1.medicne \n");
				printf("2.pharm basic \n");
				printf("3.Specs2\n");
			    break;
			default:
				printf("Invalid");
		}
		break;
		default: 
		printf("invalid");
	}
return 0;
}
	
	
	
	



