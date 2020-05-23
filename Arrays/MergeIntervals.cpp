/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
#define mp make_pair
#define ll long long
#define pi pair<ll,char>
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    vector<Interval> sol;
    priority_queue<pi, vector<pi>, greater<pi> > pq;

    pq.push(mp(newInterval.start,'a'));
    pq.push(mp(newInterval.end,'e'));

    for(auto &x:intervals){
        pq.push(mp(x.start,'a'));
        pq.push(mp(x.end,'e'));
    }

    stack<ll> st;
    Interval ans;
    while(!pq.empty()){
    
        pi temp = pq.top();
        pq.pop();
    
        if(temp.second=='a'){
        st.push(temp.first);
        }else{
            ll stTemp = st.top();
            st.pop();
            if(st.empty()){
                ans.start=stTemp;
                ans.end=temp.first;
                sol.push_back(ans);
            }
        }
    }
    return sol;
}