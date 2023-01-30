#include <iostream>
using namespace std;

// functions 

//rectangle
int rect()
{
    int i,j;
    int rows ,coloumns;
    cout<<"ENTER NUMBER OF ROWS AND COLOUMNS : ";
    cin>>rows>>coloumns;

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=coloumns;j++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
}

//left half pyramid
int lhp()
{
    int i,j;
    int rows;
    cout<<"ENTER THE NUMBER OF ROWS : ";
    cin>>rows;

    for(i=1;i<rows;i++)
    {
        for(j=1;j<=rows;j++)
        {
            if(j<=rows-i)
            {
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}

//invert half pyramid
int ihp()
{
    int i,j;
    int rows;
    cout<<"ENTER NUMBER OF ROWS : ";
    cin>>rows;

    for(i=rows;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

//inverse number pattern
int inp()
{
    int rows;
    int i,j;
    cout<<"ENTER TE NUMBER OF ROWS : ";
    cin>>rows;

    for(i=rows;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

//hollow rectangle
int hr()
{
    int i,j,k;
    int rows,coloumns;
    cout<<"ENTER NUMBER IF ROWS AND COLOUMNS : ";
    cin>>rows>>coloumns;

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=coloumns;j++)
        {
            if(i==1 || i==rows )
            {
                cout<<"*";
            }

            else if(j==1 || j== coloumns)
            {
                cout<<"*";
            }
            
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

//0-1 pattern
int zr()
{
    int rows;
    int i,j;

    cout<<"ENTER THE NUMBER OF ROWS : ";
    cin>>rows;

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            if( (i+j)%2 == 0 )
            {
                cout<<"1"<<" ";
            }
            
            else{
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }
}

//half number pyramid
int hnp()
{
    int rows;
    int i,j;
    cout<<"ENTER THE NUMBER OF ROWS : ";
    cin>>rows;

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<< i;
        }
        cout<<endl;
    }
}

//floyds triangle
int ft()
{
    int rows;
    int i,j;
    int count=1;

    cout<<"ENTER THE NUMBER OF ROWS : ";
    cin>>rows;

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}

//butterfly pattern
int bp()
{
    int rows, space;
    int i, j;
    cout << "ENTER THE NUMBER OF ROWS : ";
    cin >> rows;

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }

        space = 2 * rows - 2 * i;
        for (j = 1; j <= space; j++)
        {
            cout << " ";
        }

        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    // for down pattern

    for (i = rows; i >=1 ; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }

        space = 2 * rows - 2 * i;
        for (j = 1; j <= space; j++)
        {
            cout << " ";
        }

        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}


int main()
{
    int choice;
    cout<<"1. RECTANGLE PATTERN "<<endl;
    cout<<"2. LEFT HALF PYRAMID "<<endl;
    cout<<"3. INVERT HALF PYRAMID "<<endl;
    cout<<"4. INVERSE NUMBER PATTERN"<<endl;
    cout<<"5. HOLLOW RECTANGLE "<<endl;
    cout<<"6. 0-1 PATTERN "<<endl;
    cout<<"7. HALF NUMBER PYRAMID "<<endl;
    cout<<"8. FLOYDS TRIANGLE"<<endl;
    cout<<"9. BUTTERFLY PATTERN"<<endl;
    
    cout<<endl;
    cout<<"ENTER YOUR CHOICE : ";
    cin>>choice;

    if(choice == 1)
    {
        cout<<rect();
    }

    else if(choice == 2)
    {
        cout<<lhp();
    }

    else if(choice == 3)
    {
        cout<<ihp();
    }

    else if(choice == 4)
    {
        cout<<inp();
    }

    else if(choice == 5)
    {
        cout<<hr();
    }

    else if(choice == 6)
    {
        cout<<zr();
    }

    else if(choice == 7)
    {
        cout<<hnp();
    }

    else if(choice == 8)
    {
        cout<<ft();
    }

    else if(choice == 9)
    {
        cout<<bp();
    }

    else{
        return 0;
    }



}
