class Solution {
public:
    bool sumOfNumberAndReverse(int num) 
    {
        if(num==0)
            return true;
      if(num==1)
          return false;
     if(num==2||num==4||num==6||num==8||num==10||num==12||num==14||num==16||num==18||num==11)
         return true;
    for(int i=1;i<=num;i++)
    {
        int n=i,rev=0;
        while(n)
        {
            int rem=n%10;
            rev=rev*10+rem;
            n=n/10;
        }
        if(i+rev==num)
            return true;
    }
        return false;
    }
};
