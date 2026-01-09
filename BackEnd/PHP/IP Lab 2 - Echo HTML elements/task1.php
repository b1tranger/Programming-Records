<!-- <!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body> -->
    <?php
$a = "String\n<br>";

echo "Hello World\n<br>";
echo $a."<br>";
echo "$a";
echo "another test";

    ?>

    <?php
   echo "<br><hr><br><u>#Task 1</u><br><br>";
    $ID = "088";
    $Name = "Gaus";
echo "<b><br>ID : $ID<br></b>";
echo "Name : $Name";


echo "<br><hr><br><u>#Task 2</u><br><br>";

for($i=1;$i<=12;$i=$i+3){
echo "$i &nbsp;";
if($i%2==0){
    
    $i++;
    if($i==13){break;}
    echo "$i &nbsp;";
}
}

echo "<br><hr><br><u>#Task 3</u><br><br>";

echo "
<style>
table, th, td {
    border: 1px solid black;
    border-collapse: collapse;
    padding: 5px;
}
</style>
";


echo "
<table>
<tr>
<th>
header
</th>
</tr>
<tr>
<td>
data
</td>
</tr>
</table>

<br><br>
<details>
<br> OPENED<br>
<summary>click to open </summary>
</details>

";





?>


<!-- </body>
</html> -->