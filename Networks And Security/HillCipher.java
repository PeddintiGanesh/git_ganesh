import java.io.*;
import java.util.*;
public class HillCipher{
  static float[][] decrypt=new float[3][1];
  static float[][] a=new float[3][3];
  static float[][] b=new float[3][3];
  static float[][] mes=new float[3][1];
  static float[][] res=new float[3][1];
  static BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
  static Scanner sc=new Scanner(System.in);
  public static void main(String[] args) throws IOException{
    getkeymes();
    for(int i=0;i<3;i++)
    for(int j=0;j<1;j++)
    for(int k=0;k<3;k++)
    {
      res[i][j]=res[i][j]+a[i][j]*mes[k][j];
    }
    System.out.print("\nEncrypted String is : ");
    for(int i=0;i<3;i++)
    {
      System.out.print((char)(res[i][0]%26+97));
      res[i][0]=res[i][0];
    }
    inverse();
    
    for(int i=0;i<3;i++)
    for(int j=0;j<1;j++)
    for(int k=0;k<3;k++)
    {
      decrypt[i][j]=decrypt[i][k]+b[i][k]*res[k][j];
    }
    System.out.print("\nDecrypted String is : ");
    for(int i=0;i<3;i++)
    {
      System.out.print((char)(decrypt[i][0]%26+97));
    }
    System.out.print("\n");
    }
public static void getkeymes() throws IOException{
    System.out.println("Enter 3x3 matrix for key (it should be inversible):");
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
      a[i][j]=sc.nextFloat();
    System.out.print("\nEnter a 3 letter String:");
    String msg=br.readLine();
    for(int i=0;i<3;i++)
      mes[i][0]=msg.charAt(i)-97;
 }
public static void inverse(){
    float p,q;
    float [][] c=a;
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
    { 
      if(i==j)
       b[i][j]=1;
      else 
       b[i][j]=0;
    }
    for(int k=0;k<3;k++){
    for(int i=0;i<3;i++){
     p=c[i][k];
     q=c[k][k];
    for(int j=0;j<3;j++)
    {
      if(i!=k){
        c[i][j]=c[i][j]*q-p*c[k][j];
        b[i][j]=b[i][j]*q-p*b[k][j];
      }
    }
    }
    }
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
    {
      b[i][j]=b[i][j]/c[i][j];
    }
    System.out.println(" ");
    System.out.println("\nInverse Matrix is :");
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++)
      System.out.print(b[i][j]+"  ");
      System.out.print("\n");}
    }
    }  