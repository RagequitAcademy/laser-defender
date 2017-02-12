using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpawner : MonoBehaviour {

	public GameObject enemyPrefab;
	public float width = 10f;
	public float height = 5f;
	public float speed = 15.0f;
	public float padding = .5f;

	private Vector3 moveVector = Vector3.left;

	float camXmin, camXmax;

	// Use this for initialization
	void Start () {
		foreach (Transform child in transform) {
			GameObject enemy = Instantiate (enemyPrefab, child.transform.position, Quaternion.identity) as GameObject;
			enemy.transform.parent = child;


			float distance = transform.position.z - Camera.main.transform.position.z;
			Vector3 leftmost = Camera.main.ViewportToWorldPoint (new Vector3 ( 0, 0, distance));
			Vector3 rightmost = Camera.main.ViewportToWorldPoint (new Vector3 ( 1, 0, distance));
			camXmin = leftmost.x + padding;
			camXmax = rightmost.x - padding;

		}
	}

	// Update is called once per frame
	void Update () {

		if (transform.position.x - (width/2) <= camXmin) {
			moveVector = Vector3.right;
		} else if (transform.position.x + (width/2) >= camXmax) {
			moveVector = Vector3.left;
		}
		
		transform.position += moveVector * speed * Time.deltaTime;		
	}
		
	public void OnDrawGizmos() {
		Gizmos.DrawWireCube (transform.position, new Vector3 (width, height, 0));
	}
}
