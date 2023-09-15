class RandomizedSet {
private:
unordered_map<int,int>mp;
public:

    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mp.find(val) != mp.end())
        return false;
        mp[val] = mp.size();
        return true;
    }
    
    bool remove(int val) {
        if(mp.find(val) == mp.end())
        return false;
        else{
        mp.erase(val);
        return true;
        }
        
    }
    
    int getRandom() {
        
        int random = rand() % mp.size();
        auto it = mp.begin();
        advance(it, random);
        return it->first;
    }
};
