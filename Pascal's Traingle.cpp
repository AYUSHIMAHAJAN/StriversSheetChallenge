vector <vector<long long int> > res;
        vector<long long int> temp;
        temp.push_back(1);
        res.push_back(temp);
        if(n==1) return res;
        temp.push_back(1);
        res.push_back(temp);
        
        for(int i=2;i<n;i++){
            vector<long long int> temp=res[i-1];
            vector <long long int> t;
            t.push_back(1);
            for(int i=0;i<temp.size()-1;i++){
                t.push_back((temp[i]+temp[i+1]));
            }
             t.push_back(1);
             res.push_back(t);
        }
        
        return res;
