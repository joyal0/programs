#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	float a[2][2],b[2][2],res[2][2];
	cout<<"Enter the elements of 1st 2x2 matrix\n";
	for(int i=0;i<2;++i)   //take input of elements in 1st matrix
		for(int j=0;j<2;++j)
		{
			cin>>a[i][j];
		}
	cout<<"\nEnter the elements of the 2nd 2x2 matrix\n";
	for(int i=0;i<2;++i)   //take input of elements in 2nd matrix
		for(int j=0;j<2;++j)
		{
			cin>>b[i][j];
		}
	for(int i=0;i<2;++i)
		for(int j=0;j<2;++j)   
		{
			res[i][j] = 0;
			for(int k=0;k<2;++k)    //takes a common variable to represent smae value of colum and row while adding the value to result array
			{
				res[i][j] += a[i][k] * b[k][j];
			}
		}
	cout<<"\nThe result of multiplication of first matrix with second matrix\n";
	for(int i=0;i<2;++i)
	{
		cout<<'\n';
		for(int j=0;j<2;++j)
	 {
		 cout<<std::fixed<<setprecision(2)<<'\t'<<res[i][j];
	 }
	}
}