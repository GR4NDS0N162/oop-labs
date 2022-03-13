/////////////////////////////////////
// Файл Cone.cs

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab5_6
{
	class Cone : Body
	{
		public Cone(double r, double l, double h) : base() { radius = r; length = l; height = h; }
		public override double CalculateArea() { return area = pi * radius * (radius + length); }
		public override double CalculateVolume() { return volume = pi * radius * radius * height / 3; }
	}
}
