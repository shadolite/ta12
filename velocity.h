#ifndef VELOCITY_H
#define VELOCITY_H

class Velocity
{
private:
   float dx;
   float dy;

public:
   /**************************
    * Getters and Setters
    **************************/
   float getDx() const { return dx; }
   float getDy() const { return dy; }

   void setDx(float dx) { this->dx = dx; }
   void setDy(float dy) { this->dy = dy; }

   /**************************
    * Public member functions
    **************************/
   void prompt();
   void display() const;

   //Operators
   inline friend Velocity operator - (const  Velocity & lhs, const Velocity & rhs)
   {
      Velocity v;
      v.dx = lhs.dx - rhs.dx;
      v.dy = lhs.dy - rhs.dy;
      return v;
   }

   friend Velocity & operator -= (Velocity & lhs, const Velocity & rhs);

};

Velocity operator + (const Velocity & lhs, const Velocity & rhs);
Velocity & operator += (Velocity & lhs, const Velocity & rhs);

inline bool operator == (const Velocity & lhs, const Velocity & rhs)
{
   return (lhs.getDx() < rhs.getDX() + 0.001 && lhs.getDX() > rhs.getDx() - 0.001
           && lhs.getDy() < rhs.getDy() + 0.001 && lhs.getDy > rhs.getDy() - 0.001)
}

inline bool operator != (const Velocity & lhs, const Velocity & rhs)
{
   return (lhs.getDx() >= rhs.getDX() + 0.001 && lhs.getDX() <= rhs.getDx() - 0.001
           && lhs.getDy() >= rhs.getDy() + 0.001 && lhs.getDy <= rhs.getDy() - 0.001)
}

inline bool operator > (const Velocity & lhs, const Velocity & rhs)
{
   return (lhs > rhs)
}

inline bool operator < (const Velocity & lhs, const Velocity & rhs)
{
   return (lhs < rhs)
}

inline bool operator >= (const Velocity & lhs, const Velocity & rhs)
{
   return (lhs >= rhs)
}

inline bool operator < (const Velocity & lhs, const Velocity & rhs)
{
   return (lhs <= rhs)
}

#endif
