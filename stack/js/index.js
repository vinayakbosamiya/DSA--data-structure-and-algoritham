import fsp from "fs/promises";
import fs from "fs";
import path from "path";

// Your working directory path
let oldpath = "C:\\xampp\\htdocs\\vinay\\c language code\\stack";

try {
    // Read all files/folders in the directory
    let files = await fsp.readdir(oldpath);

    for (const item of files) {
        const itemPath = path.join(oldpath, item);
        const stat = await fsp.stat(itemPath);

        // Skip folders, only process files
        if (stat.isDirectory()) continue;

        const parts = item.split(".");
        if (parts.length <= 1) continue; // Skip files with no extension

        const ext = parts.pop(); // Get the extension

        if (ext === "exe") continue; // Skip .exe files

        const extFolder = path.join(oldpath, ext); // Folder name = extension

        // Create the extension folder if it doesn't exist
        if (!fs.existsSync(extFolder)) {
            await fsp.mkdir(extFolder);
        }

        // Move the file to the corresponding folder
        const newFilePath = path.join(extFolder, item);
        await fsp.rename(itemPath, newFilePath);
        console.log(`Moved: ${item} → ${ext}/`);
    }
} catch (err) {
    console.error("Error:", err);
}
