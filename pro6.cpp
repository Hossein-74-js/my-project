#include<iostream>
#include<conio.h>
using namespace std;
int main(){
  int a[20][20],n;
  cout<<"inter n :";
  cin>>n;
  int mini=0,maxi=n-1;
  int minj=0,maxj=n-1;
  int count=1;   	
   while(count<=n*n)
	{
   	for(int j=minj; j<=maxj; j++){
   		a[mini][j]=count;
   		 count++;
		}
   	 mini++;
   	  
   	   for(int i=mini; i<=maxi; i++){
   	   	a[i][maxj]=count;
   	   	count++;
			}
   	 maxj--;
   	 
   	   for(int j=maxj; j>=minj; j--){
   	   	a[maxi][j]=count;
   	   	count++;
			}
   	 maxi--;
   	 
   	   for(int i=maxi; i>=mini; i--){
   	   	a[i][minj]=count;
   	   	count++;
			}
   	  minj++;
  	}  
		  	for(int i=0; i<n; i++)
		   {
   	   	for(int j=0; j<n; j++){
   	   		
  	   	    	cout<<a[i][j]<<'\t';
			       }
			cout<<endl;
			}
	 	
getch();
return 0;	
}