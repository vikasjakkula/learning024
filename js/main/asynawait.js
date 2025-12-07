// asynawait.js
async function fetchData() {
    return "Data fetched successfully!";
  }
  
  (async () => {
    try {
      const data = await fetchData();
      console.log(data);
    } catch (error) {
        setTimeout(() => {
            console.log("Error fetching data:", error);},1000);
    } finally {
        console.log("end");
    }
  })();