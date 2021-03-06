using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpawner : MonoBehaviour {

	public GameObject enemyPrefab;
	public float width = 10f;
	public float height = 5f;
	public float speed = 15.0f;
	public float padding = .5f;
	public float spawnDelay = 0.5f;

	private Vector3 moveVector = Vector3.left;

	float camXmin, camXmax;

	// Use this for initialization
	void Start () {
		float distance = transform.position.z - Camera.main.transform.position.z;
		Vector3 leftmost = Camera.main.ViewportToWorldPoint (new Vector3 ( 0, 0, distance));
		Vector3 rightmost = Camera.main.ViewportToWorldPoint (new Vector3 ( 1, 0, distance));
		camXmin = leftmost.x + padding;
		camXmax = rightmost.x - padding;

		SpawnUntilFull ();
	}

	void SpawnUntilFull() {
		Transform freePosition = NextFreePosition ();

		if (freePosition) {
			GameObject enemy = Instantiate (enemyPrefab, freePosition.position, Quaternion.identity) as GameObject;
			enemy.transform.parent = freePosition;
		}

		if (NextFreePosition()) {
		Invoke ("SpawnUntilFull", spawnDelay);
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

		if (AllMembersDead()) {
			Debug.Log("Empty Formation");
			SpawnUntilFull ();
			}
	}
		
	public void OnDrawGizmos() {
		Gizmos.DrawWireCube (transform.position, new Vector3 (width, height, 0));
	}

	Transform NextFreePosition() {
		foreach (Transform childPositionGameObject in transform) {
			if (childPositionGameObject.childCount == 0) {
				return childPositionGameObject;
			}
		}
		return null;
	}

	bool AllMembersDead() {
		foreach (Transform childPositionGameObject in transform) {
			if (childPositionGameObject.childCount > 0) {
				return false;
			}
		}
		return true;
	}
}
