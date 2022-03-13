/////////////////////////////////////
// Файл Ball.cs

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab5_6
{
	class Ball : Body
	{
		public Ball(double r) : base() { radius = r; }
		public override double CalculateArea() { return area = 4 * pi * radius * radius; }
		public override double CalculateVolume() { return volume = 4 * (pi * radius * radius * radius) / 3; }
	}
}
