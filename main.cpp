#include <iostream>
#include<cmath>
using namespace std;

int main() {
	/*declaring variables*/
	double a11,a12,a13,a21,a22,a23,a31,a32,a33;
	double sd;
	double sdm;
	double det;

    cout<<"a11"<<endl;
    cin>>a11;
    cout<<"a12"<<endl;
    cin>>a12;
    cout<<"a13"<<endl;
    cin>>a13;
    cout<<"a21"<<endl;
    cin>>a21;
    cout<<"a22"<<endl;
    cin>>a22;
    cout<<"a23"<<endl;
    cin>>a23;
    cout<<"a31"<<endl;
    cin>>a31;
    cout<<"a32"<<endl;
    cin>>a32;
    cout<<"a33"<<endl;
    cin>>a33;
    
    /*calculating sum of diagonal elements(sd) , sum of diagonal minors(sdm) , determinant(det) */ 
	sd=a11+a22+a33;
	sdm=(a22*a33-a23*a32)+(a11*a33-a13*a31)+(a11*a22-a12*a21);
	det=(a11*(a22*a33-a23*a32))-(a12*(a21*a33-a23*a31))+(a13*(a21*a32-a22*a31));
	
	/* printing characteristic equation */
	cout<<"Characteristic equation :"<<endl<<"X^3-("<<sd<<")X^2+("<<sdm<<")X-("<<det<<")=0"<<endl;
	cout<<"Eigen values are :"<<endl;
	
	/*finding the first eigen value by using hit and trial method i.e. substituting all values from -100 to 100 in the cubic equation and equating to 0 */
	
		double i;
	for(i=-100;i>=-100&&i<=100;i++)
	{
		double cal=(i*i*i)-(i*i*sd)+(i*sdm)-det;
		if(cal==0)
		{
		cout<<"="<<i<<endl;
		break;
	    }

	}
	
	/*dividing the cubic polnomial by (x-i) to get a quadratic polynomial*/
	double b,c;
	b=-sd+i;
	c=b*i+sdm;
	
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
		cout<<"="<<real<<"+"<<img<<"i"<<endl;
		cout<<"="<<real<<"-"<<img<<"i"<<endl;
	}
	
		/* verification */
	double sume=i+r1+r2;
	double prod=i*r1*r2;
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
