#include<stdio.h>

 int main()
 {
      int a[10][10],i,j,row,col,detA=0,m[i][j];
      int m11,m12,m13,m21,m22,m23,m31,m32,m33;
      int temp1,temp2,temp3,sum=0;
      int x,y,z,x1=0,x2=0,x3=0,x4,x5,x6;
      printf("Enter the row and col size\n");
      scanf("%d%d",&row,&col);
      printf("Enter the %d number\n",(row*col));
      for(i=1;i<=row;i++)
      {
          for(j=1;j<=col;j++)
          {
              scanf("%d",&a[i][j]);
          }
      }
      printf("The matrix is\n");
      for(i=1;i<=row;i++)
      {
          for(j=1;j<=col;j++)
          {
              printf("%d\t",a[i][j]);
          }
          printf("\n");
      }
       detA = (a[1][1]*(a[2][2]*a[3][3]-a[2][3]*a[3][2]))-((a[1][2]*(a[2][1]*a[3][3]-a[2][3]*a[3][1]))-(a[1][3]*(a[2][1]*a[3][2]-a[2][2]*a[3][1])));
       printf(" the det |A| is %d\n",detA);
       if(detA!=0)
       {
       for(i=1;i<=row;i++)
      {
          for(j=1;j<=col;j++)
          {
                if(i==1 & j==1)
                m11 = a[2][2]*a[3][3] - a[2][3]*a[3][2];
                else if(i==1 & j==2)
                m12 = a[2][1]*a[3][3] - a[2][3]*a[3][1];
                else if(i==1 & j==3)
                m13 = a[2][1]*a[3][2] - a[2][2]*a[3][1];
                else if(i==2 & j==1)
                m21 = a[1][2]*a[3][3] - a[1][3]*a[3][2];
                else if(i==2 & j==2)
                m22 = a[1][1]*a[3][3] - a[1][3]*a[3][1];
                else if(i==2 & j==3)
                m23 = a[1][1]*a[3][2] - a[1][2]*a[3][1];
                else if(i==3 & j==1)
                m31 = a[1][2]*a[2][3] - a[1][3]*a[2][2];
                else if(i==3 & j==2)
                m32 = a[1][1]*a[2][3] - a[1][3]*a[2][1];
                else if(i==3 & j==3)
                m33 = a[1][1]*a[2][2] - a[1][2]*a[2][1];
          }
      }
      printf("minor\n");

      printf("%d\t%d\t%d\n",m11,m12,m13);
      printf("%d\t%d\t%d\n",m21,m22,m23);
      printf("%d\t%d\t%d\n",m31,m32,m33);
      printf("The co factor matrix is : \n");
      printf("%d\t%d\t%d\n",m11,-m12,m13);
      printf("%d\t%d\t%d\n",-m21,m22,-m23);
      printf("%d\t%d\t%d\n",m31,-m32,m33);
       printf("The adj(A) matrix is : \n");
      printf("%d\t%d\t%d\n",m11,-m21,m31);
      printf("%d\t%d\t%d\n",-m12,m22,-m32);
      printf("%d\t%d\t%d\n",m13,-m23,m33);
      printf("The detriment matrix is : \n");
      printf("\t[%d\t%d\t%d]\n1/%d\t[%d\t%d\t%d]\n\t[%d\t%d\t%d]\n",m11,-m21,m31,detA,-m12,m22,-m32,m13,-m23,m33);
      printf("Enter the x value\n");
      scanf("%d",&x);
      printf("Enter the y value\n");
      scanf("%d",&y);
      printf("Enter the z value\n");
      scanf("%d",&z);
      ///.///
      temp1 = ((m11*x)+(-m21*y)+(m31*z));
      temp2 = ((-m12*x)+(m22*y)+(-m32*z));
      temp3 = ((m13*x)+(-m23*y)+(m33*z));
      printf("The X Y Z value\n");
      printf("%d\n",temp1);
      printf("%d\n",temp2);
      printf("%d\n",temp3);
      printf("The answer is \n");

      x4 = temp1%detA;
      if(x4==0)
      {
          x1 = temp1/detA;
          printf("The X value is : %d\n",x1);
      }
      else
      {
          printf("The X value is : \t[%d/%d]\n",temp1,detA);
      }
      x5 = temp2%detA;
      if(x5==0)
      {
          x2 = temp2/detA;
          printf("The Y value is : %d\n",x2);
      }
      else
      {
          printf("The Y value is : \t[%d/%d]\n",temp2,detA);
      }
      x6 = temp3%detA;
      if(x6==0)
      {
          x3 = temp3/detA;
          printf("The Z value is : %d\n",x3);
      }
      else
      {
          printf("The Z value is :\t[%d/%d]\n",temp3,detA);
      }
      /*x1 = temp1/detA;
      x2 = temp2/detA;
      x3 = temp3/detA;
      printf("The X value is : %d\n",x1);
      printf("The Y value is : %d\n",x2);
      printf("The Z value is : %d\n",x3);*/

      printf("Non singular matrix \n");
       }
       else
        printf("Singular matrix\n");
}