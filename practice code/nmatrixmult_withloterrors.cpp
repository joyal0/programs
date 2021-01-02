#include<iostream>

using namespace std;
#include<vector>
//THIS PROGRAM HAS A LOT OF ERRORS AND NOTED FOR FUTURE CORRECTIONS
//This is a program to find the multiples of 2 matrixes
int main()
{
    int r1,c1,r2,c2;
    cout<<"Enter the dimensions of 1st matrix.\n";
    cin>>r1>>c1;
    cout<<"Enter the dimensions of 2nd matrix.\n";
    cin>>r2>>c2;
    Vector<float> a[r1][c1],b[r2][c2],res[r1][c2];
    if(c1!=r2)
        cout<<"The 2nd matrixes to be multiplied must have same rowvalue as column value of 1st matrix";
    else
    {
        cout<<"\nEnter the elements of the first matrix\n";
        for(int i = 0  ; i < r1 ; ++i )
            for(int j = 0 ; j < c1 ; ++j)
                {
                    cin>>a[i][j];
                }
        cout<<"\nEnter the elements of the second matrix\n";
        for(int i = 0  ; i < r2 ; ++i )
            for(int j = 0 ; j < c2 ; ++j)
                {
                    cin>>b[i][j];
                }
        for(int i = 0  ; i < r1 ; ++i )
            for(int j = 0 ; j < c1 ; ++j)
                {
                    res[i][j] = 0;
                    for(int k = 0 ; k < c1 ; ++k)
                        res[i][j] += a[i][k] + b[k][j];
                }
        cout<<"The sum of the matrcies are \n";
        for(int i = 0 ; i < r1 ; ++i )
            {
                cout<<"\n";
                for(int j = 0 ; i < c1 ; ++j)
                    {
                        cout<<"\t "<<res[i][j];
                    }
            }
    }
}