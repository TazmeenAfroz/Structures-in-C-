#include<iostream>
#include<cstring>
using namespace std;


struct  Movie_Data{
 
 string Title;
 string Director;
 int Year_Released;
};
 void display(Movie_Data movie);

Movie_Data createMovieData()
{ Movie_Data movie;
getchar();
  cout<<"Enter the movie name :"<<endl;
  getline(cin,movie.Title);
  cout<<"Enter the name of director :"<<endl;
  getline(cin,movie.Director);

  cout<<"Enter the year of release :"<<endl;
  cin>>movie.Year_Released;

  

  return movie;
}

void display(Movie_Data movie)
{
cout<< "Movie Title : "<<movie.Title<<endl;
cout<< " Director Name : "<<movie.Director<<endl;
cout<<" Year released : "<<movie.Year_Released<<endl;
}



int main(){


     Movie_Data movie1;
     movie1 = createMovieData();
 
  

 cout  << "Movie 1: " << endl;
  display(movie1);
  
  Movie_Data movie2;
  movie2 = createMovieData();

  cout<< "Movie 2: " << endl;
  display(movie2);


}