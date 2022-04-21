
  /* function for calculating MSE form input array and result array and long term mean max*/  
int MeanMaxMSE(float *MSEhistory,float *Input, float *result, int satutspointer, float *eval)
{
   float mse,max,mean,square;
   int n=10;
   satutspointer= satutspointer < n ? satutspointer:n; 
   //calc MSEerror
   square=0;
   for (int i = 0; i < 4; i++) { 
         square += pow(Input[i]-result[i], 2); 
    }    
   MSEhistory[satutspointer]=(square / 4);
   eval[2]=MSEhistory[satutspointer];
   
      // find max and calculate mean
   max=0;
   mean=0;
   for (int i=0;i<n;i++)
   {
      max= MSEhistory[i] > max ? MSEhistory[i]:max;
      mean+=MSEhistory[i]; 
   }
   mean/=n;
  
      // evaluation array with mean and max 
   eval[0]=mean;
   eval[1]=max;
return 1;
}


float createMean( float deine_Wert ,float *mean_Wert)
{
    float sum,mean;

    for (int a=1;a<n;a++)
        {
        mean_Wert[a-1]=mean_Wert[a];
        }
    mean_Wert[n-1]=deine_Wert;
    mean=0;
    for (int a=0; a<n;a++)
    {
        mean+=mean_Wert[a];
    }
    mean/=n;
    return mean;
}
