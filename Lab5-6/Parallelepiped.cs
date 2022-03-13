/////////////////////////////////////
// Файл Parallelepiped.cs

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab5_6
{
	class Parallelepiped : Body
	{
		public Parallelepiped(double l, double w, double h) : base() { length = l; width = w; height = h; }
		public override double CalculateArea() { return area = 2 * (length * width + length * height + width * height); }
		public override double CalculateVolume() { return volume = length * width * height; }
	}
}
