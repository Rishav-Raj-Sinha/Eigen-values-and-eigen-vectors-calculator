#include <iostream>
#include<cmath>
using namespace std;

int main() {
	/*declaring variables*/
	double A[3][3];
	double sd;
	double sdm;
	double det;

	cout<<"enter elements of your matrix :"<<endl;
	for(int i=1;i<=3;i++)
	{
	 for(int j=1;j<=3;j++)
		{
		cout<<"enter element "<<i<<j<<":";
		cin>>A[i][j];
		cout<<endl;
	    }
	}
	
	cout<<"your matrix :"<<endl;
	
	for(int i=1;i<=3;i++)
   	{
     	for(int j=1;j<=3;j++)
     	{
		 cout<<A[i][j];
	 	}
     cout<<endl;
}
    
    /*calculating sum of diagonal elements(sd) , sum of diagonal minors(sdm) , determinant(det) */ 
	sd=A[1][1]+A[2][2]+A[3][3];
	sdm=(A[2][2]*A[3][3]-A[2][3]*A[3][2])+(A[1][1]*A[3][3]-A[1][3]*A[3][1])+(A[1][1]*A[2][2]-A[1][2]*A[2][1]);
	det=(A[1][1]*(A[2][2]*A[3][3]-A[2][3]*A[3][2]))-(A[1][2]*(A[2][1]*A[3][3]-A[2][3]*A[3][1]))+(A[1][3]*(A[2][1]*A[3][2]-A[2][2]*A[3][1]));
	
	/* printing characteristic equation */
	cout<<"Characteristic equation :"<<endl<<"X^3-("<<sd<<")X^2+("<<sdm<<")X-("<<det<<")=0"<<endl;
	cout<<"Eigen values are :"<<endl;
	
	/*finding the first eigen value by using hit and trial method i.e. substituting all values from -100 to 100 in the cubic equation and equating to 0 */
	double q;
	for(q=-100;q>=-100&&q<=100;q++)
	{
		double cal=(q*q*q)-(q*q*sd)+(q*sdm)-det;
		if(cal==0)
		{
		cout<<"="<<q<<endl;
		break;
	    }

	}
	
	/*dividing the cubic polnomial by (x-q) to get a quadratic polynomial NOTE:"q* is the first root*/
	double b,c;
	b=-sd+q;
	c=b*q+sdm;
	
	/*finding roots of the quadratic equation*/
	double d,r1,r2,real,img;
	d=b*b-4*c;
	if(d>0)
	{
	 r1=(-b-sqrt(d))/(2);
	  r2=(-b+sqrt(d))/(2);
	  	cout<<"="<<r1<<endl<<"="<<r2<<endl;

	 
	}
	
	else if(d==0)
	{
		r1=-b/2;
		r2=-b/2;
			cout<<"="<<r1<<endl<<"="<<r2<<endl;

	}
	else
	{
		real=-b/2;
		img=sqrt(d)/2;
		cout<<"="<<real<<"+"<<img<<"q"<<endl;
		cout<<"="<<real<<"-"<<img<<"q"<<endl;
	}
	
		/* verification */
	double sume=q+r1+r2;
	double prod=q*r1*r2;
	if(sd==sume)
	{
	cout<<"Trace of the matrix ("<<sd<<")";
	cout<<" = sum of eigen values ("<<sume<<")"<<endl<<"and"<<endl;
	if(det==prod)
	{
			cout<<"Determinant of the matrix ("<<det<<")";
	cout<<" = product of eigen values ("<<prod<<")"<<endl<<"hence verified"<<endl;
	}
    }

else
{
	cout<<"ERROR";
}

  /* finding eigen vectors */
  
 /*double aa11,aa12,aa13,aa21,aa22,aa23;
 
 aa11=a11-i;
 aa12=a12-i;
 aa13=a13-i;
 aa21=a21-i;
 aa22=a22-i;
 aa23=a23-i;
 
 cout<<aa11<<aa12<<aa13<<aa21<<aa22<<aa23;
 
 double x1,x2,x3;
 x1=aa12*aa23-aa13*aa22;
 x2=-(aa11*aa23-aa13*aa21);
 x3=(aa11*aa22-aa12*aa21);
 
 cout<<"for eigen vaule = "<<i<<" ,eigen vector : "<<endl;
 cout<<"|"<<x1<<"|"<<endl;
 cout<<"|"<<x2<<"|"<<endl;
 cout<<"|"<<x3<<"|"<<endl;
 */
  
  
	return 0;
}
