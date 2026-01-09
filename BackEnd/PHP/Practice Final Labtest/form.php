<?php

include("connection.php");
if (isset($_POST['operation'])) {
    $num1 = $_POST['num1'];
    $num2 = $_POST['num2'];
    $type = $_POST['type'];

    if ($type == "add") {
        echo "Addition Operation";
        $output = $num1 + $num2;
    } elseif ($type == "sub") {
        echo "Subtraction Operation";
        $output = $num1 - $num2;
    } else {
        echo "None selected";
    }


}


if (isset($_POST["function"])) {


    $num1 = $_POST['num1'];
    $num2 = $_POST['num2'];
    $type = $_POST['type'];

    if ($type == "Good") {
        echo "Student Good";
        $output = $num1 + $num2;
    } elseif ($type == "sub") {
        echo "Student Bad";
        $output = $num1 - $num2;
    } else {
        echo "None selected";
    }
    class student
    {

        private $var1;
        private $var2;
        function __construct($type)
        {
            echo "<br><br>Constructor Created for<br>";
            echo $type . " Student";
        }
        public function report($num1, $num2)
        {
            echo "<br><br>input numbers:<br><br>";
            echo $num1 . " & " . $num2;
        }


    }
    $student1 = new Student($type);
    $student1->report($num1, $num2);

}

if (isset($_POST["db"])) {
    $serial = $_POST['serial'];
    $num1 = $_POST['num1'];
    $num2 = $_POST['num2'];
    $type = $_POST['type'];

    if ($type == "Delete") {
        echo "SQL Selete Operation for $serial<br><br>";
        $sql = "delete from num where id='$serial'";
        $result = mysqli_query($conn, $sql);
        echo "<br>deleted $serial<br><br>";
    } elseif ($type == "Update") {
        echo "SQL Update Operation for $serial<br><br>";
        $sql = "update num set num1='$num1',num2='$num2' where id='$serial' ";
        $result = mysqli_query($conn, $sql);
        echo "<br>updated $serial<br><br>";
    } elseif ($type == "Select") {
        echo "SQL Select Operation for $serial<br><br>";
        $sql = "Select * from num where id='$serial'";
        $result = mysqli_query($conn, $sql);
        $row = mysqli_fetch_assoc($result);
        echo "<br>Selected $serial<br><br>";
        echo "<br>showing " .$row['num1']. " & ".$row['num2'];
    } elseif ($type == "Insert") {
        echo "SQL Insert Operation for $serial<br><br>";
        $sql = "Insert into num(id,num1,num2) values($serial,$num1,$num2)";
        $result = mysqli_query($conn, $sql);
        // $row = fetch_assoc($result);
        echo "<br>Inserted $serial<br><br>";

    } else {
        echo "None selected";
    }

}
?>



<!DOCTYPE html>
<html>

<head>
    <title>Insert Data into ip_prac</title>
</head>

<body>


    <h2>operation</h2>
    <form method="POST">

        <label>num 1:</label>
        <input type="number" name="num1" required><br><br>

        <label>num 2:</label>
        <input type="number" name="num2" required><br><br>

        <label>type:</label>
        <select name="type">
            <option value="">--</option>
            <option value="add">1. Addition</option>
            <option value="sub">2. Subtraction</option>
        </select><br><br>
        <input type="text" value="<?php echo $output; ?>"><br><br>

        <input type="submit" name="operation" value="operation">
    </form>

    <h2>function</h2>
    <form method="POST">
        <label>num 1:</label>
        <input type="number" name="num1" required><br><br>

        <label>num 2:</label>
        <input type="number" name="num2" required><br><br>

        <label>type:</label>
        <select name="type">
            <option value="">--</option>
            <option value="Good">1. Good</option>
            <option value="Bad">2. Bad</option>
        </select><br><br>
        <input type="text" value="<?php echo $output; ?>"><br><br>

        <input type="submit" name="function" value="function">
    </form>

    <h2>db</h2>
    <form method="POST">
        <label>serial:</label>
        <input type="number" name="serial" required><br><br>
        <label>num 1:</label>
        <input type="number" name="num1" required><br><br>

        <label>num 2:</label>
        <input type="number" name="num2" required><br><br>

        <label>type:</label>
        <select name="type">
            <option value="">--</option>
            <option value="Delete">1. delete</option>
            <option value="Update">2. update</option>
            <option value="Select">3. select</option>
            <option value="Insert">4. insert</option>
        </select><br><br>
        <input type="text" value="<?php echo $output; ?>"><br><br>

        <input type="submit" name="db" value="db">
    </form>
</body>

</html>