#include<stdio.h>
#include<string.h>

int main()
{
	char n[100];
	int k,t1,t2,t3,s=0,len,i,j;

	scanf("%s",n);
	
  if(n[0]!='-')
  {
	scanf("%d",&k);

	len=strlen(n);

	for(i=0;i<len;i++){
		for(j=i+1;j<len;j++){

			t1=n[i]-48;
			t2=n[j]-48;

			if(t2<t1){
				t3=n[j];
				n[j]=n[i];
				n[i]=t3;
			}
		}
	}
	t2=1;
	for(i=(len-k-1);i>=0;i--){
		t1=n[i]-48;
		s=s+(t1*t2);
		t2=t2*10;
	}

	printf("%d",s);
  }
  else
  	printf("0");

return 0;
}
