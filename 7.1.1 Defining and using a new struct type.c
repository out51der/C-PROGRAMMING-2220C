typedef struct StructTypeName_struct {
   type item1;
   type item2;
   ...
   type itemN;      
} StructTypeName;

...
StructTypeName myVar;
 
myVar.item1 = ...
  
  
  
  //Struct example
  
typedef struct TimeHrMin_struct {
   int hourValue;
   int minuteValue;
} TimeHrMin;

...

   TimeHrMin runTime1;
   TimeHrMin runTime2;
   TimeHrMin runTime3;

   runTime1.hourValue = 5;
   runTime1.minuteValue = 46;
   runTime3.hourValue = runTime1.hourValue;
