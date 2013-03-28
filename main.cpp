#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;

void mostrarM(int M[][8],int jugada,int sum)
{
     for(int i=0;i<=7;i++)
     {
           for(int j=0;j<=7;j++)
               cout<<M[i][j]<<"     ";     
           cout<<endl<<endl<<endl; 
     }                           
     cout<<"Jugada Numero: "<<jugada<<endl;
     cout<<"contador: "<<sum<<endl;
     system("pause");
     system("CLS");   
}

void llenarM(int M[][8])
{
     
     for(int i=0;i<=7;i++)
         for(int j=0;j<=7;j++)
             M[i][j]=0;            //--> Se llena la matriz de 8x8 con ceros
     int i=7,j=0,jugada=1,sum=1;
     M[i][j]=1;
     srand(time(NULL));
     mostrarM(M,jugada,sum);
     while(sum!=60)                                    
     {
         long num=(rand()%8)+1;   //-->Se generará un número al azar y se le asignara con una de las posibles jugadas que puede realizar el caballo
         switch(num)
         {
              case 1:
                   i=i-1;
                   j=j+2;
                   if(i<0||i>7||j<0||j>7||(i==2 && j==2)||(i==2 && j==5)||(i==5 && j==2)||(i==5 && j==5))//Condiciones de borde del tablero y los 4 peones
                   {
                       i=i+1;                   //inverso de la jugada para devolverse a donde estaba
                       j=j-2;
                   }
                   else
                   {
                       if(M[i][j]==0)                        //Si el caballo no ha estado antes en esa posición
                       {
                            M[i][j]=1;
                            sum++;
                            jugada++;
                            mostrarM(M,jugada,sum);
                       }
                       else                       
                       { 
                             M[i][j]++; 
                             jugada++;
                             mostrarM(M,jugada,sum);        
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
                            jugada++;
                            mostrarM(M,jugada,sum);
                            
                       }
                       else
                       {
                           M[i][j]++; 
                           jugada++;
                           mostrarM(M,jugada,sum);
                           
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
                            jugada++;
                            mostrarM(M,jugada,sum);
                            
                       }
                       else
                       {
                           M[i][j]++; 
                           jugada++;
                           mostrarM(M,jugada,sum);
                           
                       }
                        
                   }
                   break;
              case 4:
                   i=i-2;
                   j=j-1;
                   if(i<0||i>7||j<0||j>7||(i==2 && j==2)||(i==2 && j==5)||(i==5 && j==2)||(i==5 && j==5))
                   {
                       i=i+2;
                       j=j+1;                         
                   }
                   else
                   {
                       if(M[i][j]==0)
                       {
                            M[i][j]=1;
                            sum++;
                            jugada++;
                            mostrarM(M,jugada,sum);
                            
                       }
                       else
                       {
                           M[i][j]++; 
                           jugada++;
                           mostrarM(M,jugada,sum);
                           
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
                            jugada++;
                            mostrarM(M,jugada,sum);
                            
                       }
                       else
                       {
                           M[i][j]++; 
                           jugada++;
                           mostrarM(M,jugada,sum);
                           
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
                            jugada++;
                            mostrarM(M,jugada,sum);
                            
                       }
                       else
                       {
                           M[i][j]++;
                           jugada++; 
                           mostrarM(M,jugada,sum);
                           
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
                            jugada++;
                            mostrarM(M,jugada,sum);
                            
                       }
                       else
                       {
                           M[i][j]++; 
                           jugada++;
                           mostrarM(M,jugada,sum);
                           
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
                            jugada++;
                            mostrarM(M,jugada,sum);
                            
                       }
                       else
                       {
                           M[i][j]++;
                           jugada++; 
                           mostrarM(M,jugada,sum);
                           
                       }
                        
                   }
                   break;
                   
         }
     }
}

int main(int argc, char *argv[])
{
    int A[8][8];
    llenarM(A);
    system("PAUSE");
    return EXIT_SUCCESS;
}
