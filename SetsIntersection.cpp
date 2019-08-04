#include<bits/stdc++.h>
std::vector<bool> c(1000000000);
int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	std::vector<long long int> a(n), b(m);
	for(long long int i=0;i<n;i++){
		scanf("%lld", &a[i]);
		++c[a[i]];
	}
	std::vector<long long int> d;
	for(long long int i=0;i<m;i++){
		scanf("%lld", &b[i]);
		if(c[b[i]]){
			d.push_back(b[i]);
		}
	}
	return 0;
}




//The function for same operation..
//It takes two vectors with N and M elements and returns a vector of intersection of both of them.
#include<bits/stdc++.h>
std::vector<bool> c(1000000000);
std::vector<long long int> intersect(std::vector<long long int> First, std::vector<long long int> Second){
	std::vector<long long int> Intersection;
	for(long long int i=0;i<First.size();i++)
		++c[First[i]];
	for(long long int i=0;i<Second.size();i++)
		if(c[Second[i]])
			Intersection.push_back(Second[i]);
	return Intersection;
}

Sir/Ma'am,
I am a fresh passed out graduate with Bachelors in Electrical Engineering from Punjab Engineering  College, Chandigarh.
Although I majored in Electrical Engineering, I had inclination towards Computers and I started to learn Computer Programming. I started enjoying it so much that I, with a little Programming experience, started Competitive Coding and realized that there is so much to learn. This feeling kept me going. I read Bjarne Stroustrup's The C++ Programming Language, Introduction to Algorithms by Cormen and others, Data Structures by Horowitz, and am reading the one by Donald Knuth.
I am intrigued by how much we have achieved and how real life problems can be solved by just bringing data in a good shape and performing operations on it using some Maths!
I have gone through Databricks' website and follow Databricks on Linkedin. I love the work people do here and how at different events and conferences, you are leaving an impact! I want to be a part of a team so agile and want to grow alongside these great pool of people and give my best to serve the interests of the organization!