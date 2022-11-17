class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
       map<string,int>arr;
       for(int i=0;i<words.size();i++)
       {
           arr[words[i]]++;
       } 
       map<int,vector<string>>res;
       map<string,int>::iterator it;
       for(it=arr.begin();it!=arr.end();++it)
       {
           res[it->second].push_back(it->first);
       }
       map<int,vector<string>>::reverse_iterator its;
       int val=0;
       vector<string>fin;
       while(val<k)
       {
           for(its=res.rbegin();its!=res.rend();its++)
           {
               for(int z=0;z<its->second.size();z++)
               {
                   fin.push_back(its->second[z]);
                   val++;
                   if(val==k)
                        break;
               }
               if(val==k)
                break;
           }
       }
       return fin;
    }
};
