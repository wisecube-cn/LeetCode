class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        vector<string> week = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        int c;
        int y;
        if(month<3){
            year-=1;
            month+=12;
        }
        c=int(year/100);
        y=year-100*c;
        int w=int(c/4)-2*c+y+int(y/4)+(26*(month+1)/10)+day-1;
        w=(w%7+7)%7;
        return week[w];
    }
};
