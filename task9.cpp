#include <iostream>
using namespace std;

main()
{
string year;
int holidays, hometownWeekends, extraPlaying, playing;
float TotalPlayingTime,playingInHolidays, playingSofia, playingHometown, NotTravellingWeekends;

cout<<"Enter the type of year: ";
cin>>year;
cout<<"Enter the number of holidays: ";
cin>>holidays;
cout<<"Enter the number of weekends V goes to hometown: ";
cin>>hometownWeekends;

NotTravellingWeekends = 48 - hometownWeekends;
playingInHolidays = holidays*2/3;
playingSofia = playingInHolidays + (NotTravellingWeekends * 3/4);
playingHometown = hometownWeekends;
TotalPlayingTime = playingSofia + playingHometown;

    if(year == "Normal")
    {
        playing = TotalPlayingTime;
        cout<<playing;
    }
    
    else if(year == "Leap")
    {
        extraPlaying = TotalPlayingTime + (TotalPlayingTime*0.15);
        cout<<extraPlaying;
    }
}

