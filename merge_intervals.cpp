/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<Interval>::iterator it=intervals.begin();
    vector<Interval> result;
    if(newInterval.start>newInterval.end){
        swap(newInterval.start, newInterval.end);
    }
    if((*it).start>newInterval.end){
        result.push_back(newInterval);
        for(it;it!=intervals.end();it++)
            result.push_back(*it);
    }
    else if((*it).start==newInterval.end){
        Interval temp=Interval(newInterval.start, (*it).end);
        result.push_back(temp);
        ++it;
        for(it;it!=intervals.end();it++)
            result.push_back(*it);
    }
    else for(it;it!=intervals.end();it++){
        if(newInterval.start>(*it).end){
            result.push_back(*it);
        }
        else if(newInterval.start>=(*it).start&&newInterval.start<=(*it).end&&newInterval.end>(*it).end){
            Interval temp=Interval((*it).start, (*it).end);
            ++it;
            while(newInterval.end>=(*it).start&&newInterval.end<=(*it).end&&it!=intervals.end()){
                temp.end=(*it).end;
                ++it;
            }
            if(it==intervals.end())
                --it;
            if((*it).end<=newInterval.end)
                temp.end=newInterval.end;
            result.push_back(temp);
            ++it;
            while(it!=intervals.end()){
                result.push_back(*it);
                ++it;
            }--it;
        }
        else if(newInterval.start>=(*it).start&&newInterval.start<=(*it).end&&newInterval.end<=(*it).end)
            result.push_back(*it);
    }
    if((*it).end<newInterval.start)
        result.push_back(newInterval);
    return result;
}

