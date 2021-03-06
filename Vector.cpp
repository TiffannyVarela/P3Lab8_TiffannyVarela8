#include <iostream>
using namespace std;
template <class coordenada>
class Vector
{
	coordenada x;
	coordenada y;
	coordenada z;
public:
	Vector(){};

	Vector(coordenada x,coordenada y,coordenada z){
		this->x=x;
		this->y=y;
		this->z=z;
	};

	coordenada getX(){
		return x;
	};

	coordenada getY(){
		return y;
	};

	coordenada getZ(){
		return z;
	};

	void setX(){
		this->x=x;
	};

	void setY(){
		this->y=y;
	};

	void setZ(){
		this->z=z;
	};

	string toString(){
		cout<<"["<<x.toString()<<","<<y.toString()<<","<<z.toString()<<"]";
		return " ";
	}

	Vector operator+(Vector operando){
		Vector resp;
		coordenada coordenada_x=this->x+operando.getX();
		coordenada coordenada_y=this->y+operando.getY();
		coordenada coordenada_z=this->z+operando.getZ();
		 //resp(coordenada_x,coordenada_y,coordenada_z);
		//return resp;
	}

	Vector operator*(Vector operando){
		Vector resp;
		coordenada coordenada_x=this->x*operando.getX();
		coordenada coordenada_y=this->y*operando.getY();
		coordenada coordenada_z=this->z*operando.getZ();
		//resp(coordenada_x,coordenada_y,coordenada_z);
		//return resp;
	}
	
};