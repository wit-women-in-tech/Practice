class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int i = 0;
        int count = 0;
        while(tickets[k]!=0){
            for(int j=0;j<tickets.size();j++){
                if(tickets[k] == 0)
                    break;
                if(tickets[j]!=0){
                    tickets[j]--;
                    count++;
                }
            }
        }
        return count;
    }
};
