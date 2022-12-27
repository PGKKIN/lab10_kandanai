int printO(int N, int M)
{
int  x=N;
int  y=M;
    if(x>0 and y>0)
    {
        for (x; x>0; x--)
        {
            for(y; y>0; y-- )
            {
                cout<<"O";
            }
            cout<<"\n";
        } 
    }
    else
    {
        cout<< Invalid input;
    }
} 