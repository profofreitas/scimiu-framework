#ifndef VECTOR_H
#define VECTOR_H

class Vector {
	public:
		/**
		 * @autor: prof.ofreitas@gmail.com
		 */
		Vector(double, double, double);
		
        double getMagnitude();
		Vector normalized();

        // Getters n' setters
		void setX(double);
		double getX();
		void setY(double);
		double getY();
		void setZ(double);
		double getZ();

	private:
		double xCoordinate;
        double yCoordinate;
        double zCoordinate;
};

#endif // !VECTOR_H