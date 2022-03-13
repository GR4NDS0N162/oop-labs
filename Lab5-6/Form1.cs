/////////////////////////////////////
// Файл Form1.cs

using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Lab5_6
{
	public partial class Form1 : Form
	{
		public Form1()
		{
			InitializeComponent();
		}

		private void button1_Click(object sender, EventArgs e)
		{
			double.TryParse(textBox1.Text, out double l);
			double.TryParse(textBox2.Text, out double w);
			double.TryParse(textBox3.Text, out double h);
			Body p = new Parallelepiped(l, w, h);
			textBox7.Text = System.Convert.ToString(p.CalculateArea());
		}

		private void button2_Click(object sender, EventArgs e)
		{
			double.TryParse(textBox1.Text, out double l);
			double.TryParse(textBox2.Text, out double w);
			double.TryParse(textBox3.Text, out double h);
			Body p = new Parallelepiped(l, w, h);
			textBox8.Text = System.Convert.ToString(p.CalculateVolume());
		}

		private void button4_Click(object sender, EventArgs e)
		{
			double.TryParse(textBox6.Text, out double r);
			double.TryParse(textBox5.Text, out double l);
			double.TryParse(textBox4.Text, out double h);
			Body p = new Cone(r, l, h);
			textBox11.Text = System.Convert.ToString(p.CalculateArea());
		}

		private void button3_Click(object sender, EventArgs e)
		{
			double.TryParse(textBox6.Text, out double r);
			double.TryParse(textBox5.Text, out double l);
			double.TryParse(textBox4.Text, out double h);
			Body p = new Cone(r, l, h);
			textBox10.Text = System.Convert.ToString(p.CalculateVolume());
		}

		private void button6_Click(object sender, EventArgs e)
		{
			double.TryParse(textBox9.Text, out double r);
			Body p = new Ball(r);
			textBox13.Text = System.Convert.ToString(p.CalculateArea());
		}

		private void button5_Click(object sender, EventArgs e)
		{
			double.TryParse(textBox9.Text, out double r);
			Body p = new Ball(r);
			textBox12.Text = System.Convert.ToString(p.CalculateVolume());
		}
	}
}
