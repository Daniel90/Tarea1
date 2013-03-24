#include <cstdlib>
#include <iostream>

using namespace std;

// comentario 2 
void llenarM(int M[][8])
{
     int cont=1;
     for(int i=0;i<=7;i++)
         for(int j=0;j<=7;j++)
             M[i][j]=0;
     int i=7;
     int j=0;
     M[i][j]=1;
     int sum=1;
     srand(time(NULL));
     while(sum!=60)
     {
         long num=(rand()%8)+1;
         switch(num)
         {
              case 1:
                   i=i-1;
                   j=j+2;
                   if(i<0||i>7||j<0||j>7||(i==2 && j==2)||(i==2 && j==5)||(i==5 && j==2)||(i==5 && j==5))
                   {
                       i=i+1;
                       j=j-2;
                   }
                   else
                   {
                       if(M[i][j]==0)
                       {
                            M[i][j]=1;
                            sum++;
                       }
                       else
                       {
                       }
                   }
                   break;
              case 2:
                   i=i-1;
                   j=j-2;
                   if(i<0||i>7||j<0||j>7||(i==2 && j==2)||(i==2 && j==5)||(i==5 && j==2)||(i==5 && j==5))
                   {
                        i=i+1;
                        j=j+2;
                   }
                   else
                   {
                       if(M[i][j]==0)
                       {
                            M[i][j]=1;
                            sum++;
                       }
                       else
                       {
                       }
                   }
                   break;
              case 3:
                   i=i-2;
                   j=j+1;
                   if(i<0||i>7||j<0||j>7||(i==2 && j==2)||(i==2 && j==5)||(i==5 && j==2)||(i==5 && j==5))
                   {
                       i=i+2;
                       j=j-1;
                   }
                   else
                   {
                       if(M[i][j]==0)
                       {
                            M[i][j]=1;
                            sum++;
                       }
                       else
                       {
                       }
                   }
                   break;
              case 4:
                   i=i-2;
                   j=j+1;
                   if(i<0||i>7||j<0||j>7||(i==2 && j==2)||(i==2 && j==5)||(i==5 && j==2)||(i==5 && j==5))
                   {
                       i=i+2;
                       j=j-1;                         
                   }
                   else
                   {
                       if(M[i][j]==0)
                       {
                            M[i][j]=1;
                            sum++;
                       }
                       else
                       {
                       }
                   }
                   break;
              case 5:
                   i=i+1;
                   j=j-2;
                   if(i<0||i>7||j<0||j>7||(i==2 && j==2)||(i==2 && j==5)||(i==5 && j==2)||(i==5 && j==5))
                   {
                        i=i-1;
                        j=j+2;                      
                   }
                   else
                   {
                       if(M[i][j]==0)
                       {
                            M[i][j]=1;
                            sum++;
                       }
                       else
                       {
                       }
                   }
                   break;
              case 6:
                   i=i+1;
                   j=j+2;
                   if(i<0||i>7||j<0||j>7||(i==2 && j==2)||(i==2 && j==5)||(i==5 && j==2)||(i==5 && j==5))
                   {
                        i=i-1;
                        j=j-2;
                   }
                   else
                   {
                       if(M[i][j]==0)
                       {
                            M[i][j]=1;
                            sum++;
                       }
                       else
                       {
                       }
                   }
                   break;
              case 7:
                   i=i+2;
                   j=j-1;
                   if(i<0||i>7||j<0||j>7||(i==2 && j==2)||(i==2 && j==5)||(i==5 && j==2)||(i==5 && j==5))
                   {
                       i=i-2;
                       j=j+1;   
                   }
                   else
                   {
                       if(M[i][j]==0)
                       {
                            M[i][j]=1;
                            sum++;
                       }
                       else
                       {
                       }
                   }
                   break;
              case 8:
                   i=i+2;
                   j=j+1;
                   if(i<0||i>7||j<0||j>7||(i==2 && j==2)||(i==2 && j==5)||(i==5 && j==2)||(i==5 && j==5))
                   {
                       i=i-2;
                       j=j-1;
                   }
                   else
                   {
                       if(M[i][j]==0)
                       {
                            M[i][j]=1;
                            sum++;
                       }
                       else
                       {
                       }
                   }
                   break;
         }
     }
          
                                    
     
     for(int i=0;i<=7;i++)
     {
             for(int j=0;j<=7;j++)
                 cout<<M[i][j]<<" ";   
             cout<<endl; 
     }
     cout<<sum;    

}


int main(int argc, char *argv[])
{
    int A[8][8];
    llenarM(A);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
