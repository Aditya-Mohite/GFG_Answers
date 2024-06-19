class Solution 
{
  public:
    double maxVolume(double perimeter, double area) 
    {
        double len= (perimeter/2-sqrt(perimeter*perimeter/4-6*area))/6;
        return len*len*(perimeter/4-2*len);
    }
};
