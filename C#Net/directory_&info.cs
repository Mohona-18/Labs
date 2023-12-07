/*
using System;
using System.IO;

class Test
{
    public static void Main()
    {
        // Specify the directories you want to manipulate.
        DirectoryInfo di = new DirectoryInfo(@"c:\MyDir");
        try
        {
            // Determine whether the directory exists.
            if (di.Exists)
            {
                // Indicate that the directory already exists.
                Console.WriteLine("That path exists already.");
                return;
            }

            // Try to create the directory.
            di.Create();
            Console.WriteLine("The directory was created successfully.");

            // Delete the directory.
            di.Delete();
            Console.WriteLine("The directory was deleted successfully.");
        }
        catch (Exception e)
        {
            Console.WriteLine("The process failed: {0}", e.ToString());
        }
        finally {}
    }
}
*/

/*
using System;
using System.IO;

class CopyDir
{
    public static void CopyAll(DirectoryInfo source, DirectoryInfo target)
    {
        if (source.FullName.ToLower() == target.FullName.ToLower())
        {
            return;
        }

        // Check if the target directory exists, if not, create it.
        if (Directory.Exists(target.FullName) == false)
        {
            Directory.CreateDirectory(target.FullName);
        }

        // Copy each file into it's new directory.
        foreach (FileInfo fi in source.GetFiles())
        {
            Console.WriteLine(@"Copying {0}\{1}", target.FullName, fi.Name);
            fi.CopyTo(Path.Combine(target.ToString(), fi.Name), true);
        }

        // Copy each subdirectory using recursion.
        foreach (DirectoryInfo diSourceSubDir in source.GetDirectories())
        {
            DirectoryInfo nextTargetSubDir =
                target.CreateSubdirectory(diSourceSubDir.Name);
            CopyAll(diSourceSubDir, nextTargetSubDir);
        }
    }

    public static void Main()
    {
        string sourceDirectory = @"c:\sourceDirectory";
        string targetDirectory = @"c:\targetDirectory";

        DirectoryInfo diSource = new DirectoryInfo(sourceDirectory);
        DirectoryInfo diTarget = new DirectoryInfo(targetDirectory);

        CopyAll(diSource, diTarget);
    }

    // Output will vary based on the contents of the source directory.
}
*/