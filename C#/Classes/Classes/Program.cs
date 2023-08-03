using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;

namespace LessonBTK
{
    class ProgramClasses
    {
        static void Main(string[] args)
        {
            #region interfaces and Inheritances
            // ICustomersDal oracleCustomersDal = new SqlCustomersDal();
            // ManageCustomers manageCustomers = new ManageCustomers();
            // manageCustomers.AddDal(oracleCustomersDal);
            //
            // ICustomersDal[] customersDal = new ICustomersDal[3]
            // {
            //     new OracleCustomersDal(),
            //     new PosgresCustomersDal(),
            //     new SqlServerCustomersDal()
            // };
            //
            //
            // foreach (var item in customersDal)
            // {
            //     item.Add();
            // }
            #endregion
            //
            // DataBases dataBases = new DataBases();
            // dataBases.AddDB();
            //
            // SQLDB sqldb = new SQLDB();
            // sqldb.AddDB();


            CustomerManager customerManager = new CustomerManager();
            customerManager.logger = new DataBaseLogger();
            customerManager.Add();
        }
    }


    #region classes

    // public class DataBases
    // {
    //
    //     public int IP { get; set; }
    //     public string POST { get; set; }
    //     
    //     public virtual void AddDB()
    //     {
    //         Console.WriteLine("DB added by default");
    //     }
    //
    //     public virtual void DeleteDB()
    //     {
    //         Console.WriteLine("Delete DB by default");
    //     }
    //
    //     public virtual void UpdateDB()
    //     {
    //         Console.WriteLine("Update DB by default");
    //     }
    //     
    // }
    //
    //
    //
    // public class SQLDB:DataBases
    // {
    //     public override void AddDB()
    //     {
    //         Console.WriteLine("SQLDB added!");
    //         //base.AddDB();
    //     }
    //
    //     public override void DeleteDB()
    //     {
    //         Console.WriteLine("SQLDB delete!!");
    //         base.DeleteDB();
    //     }
    //
    //     public override void UpdateDB()
    //     {
    //         base.UpdateDB();
    //     }
    // }

    #endregion
  
}