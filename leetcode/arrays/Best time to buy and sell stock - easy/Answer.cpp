int maxProfit(vector<int>& prices) {
        long long int prof=0,min=1000000;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<min)
            {    min=prices[i];
            }
            else{
                if(prices[i]-min>prof)
                    prof=prices[i]-min;
            }
        }
        return prof;
        
}