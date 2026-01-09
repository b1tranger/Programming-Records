<?php
include("connection.php");

if (isset($_POST['submit'])) {
    $title = trim($_POST['title']);
    $author = trim($_POST['author']);
    $filter = $_POST['filter'];

    if ($filter == 'bytitle') {
        $sql = "select * from library where title='$title'";
        $result = mysqli_query($conn, $sql);
        $row = mysqli_fetch_assoc($result);
        echo "<br><br>Result found:<br><br>" . $row['id'] . " " . $row['title'] . " " . $row['author'];
    } elseif ($filter == 'byauthor') {
        $sql = "select * from library where author='$author'";
        $result = mysqli_query($conn, $sql);
        $row = mysqli_fetch_assoc($result);
        echo "<br><br>Result found:<br><br>" . $row['id'] . " " . $row['title'] . " " . $row['author'];
    } else {
        echo "Select a valid filter";
        $output = "Invalid";
    }
}



?>


<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <div style="max-width: 60%;margin:auto;margin-top:100px;">
        <form method="POST">
            <label for="title">Title: </label>
            <input type="text" name="title"><br><br>
            <label for="author">Author: </label>
            <input type="text" name="author"><br><br>
            <select name="filter">
                <option value="">-/-</option>
                <option value="bytitle">Search by Title</option>
                <option value="byauthor">Search by Author</option>
            </select>
            <br><br>
            <input type="text" value="<?php echo $output; ?>"><br><br>

            <input type="submit" name="submit" value="submit">
        </form>
    </div>
    <div style="max-width: 60%;margin:auto;">
        <hr>
        <p>Library Database:
        <ol>
            <li>
                PHP Fundamentals
                by IP_Lab_Instructor</li>
            <li>
                Web Design Best Practices by
                Web_Design_Instruct</li>
            <li>
                Software Engineering
                SE_Instructor</li>
        </ol>
        </p>
    </div>
</body>

</html>