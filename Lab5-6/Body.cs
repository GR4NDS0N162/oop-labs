/////////////////////////////////////
// Файл Body.cs

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab5_6
{
	abstract class Body
	{
		protected const double pi = 3.14159265359;
		protected double area;
		protected double volume;
		protected double length;
		protected double width;
		protected double height;
		protected double radius;
		abstract public double CalculateVolume();
		abstract public double CalculateArea();
	}
}
